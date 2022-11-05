#include "main.h"

/**
 * print_magic - prints magic
 * @header: header
 *
 */
void print_magic(ELF64Hdr header)
{
	int i;

	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf(" %02x", header.e_ident[i]);
	}
	printf("\n");
}

/**
 * print_class - prints magic
 * @header: header
 *
 */
void print_class(ELF64Hdr header)
{
	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
	{
		printf("This class is invalid\n");
		break;
	}
	case ELFCLASS32:
	{
		printf("Elf32\n");
		break;
	}
	case ELFCLASS64:
	{
		printf("Elf64\n");
		break;
	}
	}
}

/**
 * print_data - prints magic
 * @header: header
 *
 */
void print_data(ELF64Hdr header)
{
	printf("  Data:                              ");
	switch (header.e_ident[EI_DATA])
	{
	case ELFDATANONE:
	{
		printf("Unknown data format\n");
		break;
	}
	case ELFDATA2LSB:
	{
		printf("Two's compement, little-endian\n");
		break;
	}
	case ELFDATA2MSB:
	{
		printf("Two's complement, bid-endian\n");
		break;
	}
	}
}

/**
 * print_version - prints magic
 * @header: header
 *
 */
void print_version(ELF64Hdr header)
{
	printf("  Version:                           ");
	switch (header.e_ident[EI_DATA])
	{
	case EV_NONE:
	{
		printf("Invalid version\n");
		break;
	}
	case EV_CURRENT:
	{
		printf("1 (Current)\n");
		break;
	}
	}
}

/**
 * print_os_abi - prints magic
 * @header: header
 *
 */
void print_os_abi(ELF64Hdr header)
{
	printf("  OS/ABI:                            ");
	switch (header.e_ident[EI_OSABI])
	{
	case ELFOSABI_SYSV:
	{
		printf("UNIX - System V\n");
		break;
	}
	case ELFOSABI_HPUX:
	{
		printf("HP_UX\n");
		break;
	}
	case ELFOSABI_NETBSD:
	{
		printf("UNIX - NetBSD\n");
		break;
	}
	case ELFOSABI_LINUX:
	{
		printf("Linux\n");
		break;
	}
	case ELFOSABI_SOLARIS:
	{
		printf("UNIX - Solaris\n");
		break;
	}
	case ELFOSABI_IRIX:
	{
		printf("IRIS\n");
		break;
	}
	case ELFOSABI_FREEBSD:
	{
		printf("FreeBSD\n");
		break;
	}
	case ELFOSABI_TRU64:
	{
		printf("TRU64\n");
		break;
	}
	case ELFOSABI_ARM:
	{
		printf("ARM architecture\n");
		break;
	}
	case ELFOSABI_STANDALONE:
	{
		printf("Stand-alone (embedded)\n");
		break;
	}
	default:
	{
		printf("<unknown: 53>\n");
		break;
	}
	}

}

/**
 * print_abi_version - prints magic
 * @header: header
 *
 */
void print_abi_version(ELF64Hdr header)
{
	printf("  ABI Version:                       ");
	printf("%d\n", header.e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints magic
 * @header: header
 *
 */
void print_type(ELF64Hdr header)
{
	printf("  Type:                              ");
	switch (header.e_type)
	{
	case ET_NONE:
	{
		printf("Unknown type\n");
		break;
	}
	case ET_REL:
	{
		printf("REL (Relocatable file)\n");
		break;
	}
	case ET_EXEC:
	{
		printf("EXEC (Executable file)\n");
		break;
	}
	case ET_DYN:
	{
		printf("DYN (Shared object file)\n");
		break;
	}
	case ET_CORE:
	{
		printf("Core file\n");
		break;
	}
	}
}

/**
 * print_entry_point_address - prints magic
 * @header: header
 *
 */
void print_entry_point_address(ELF64Hdr header)
{
	printf("  Entry point address:               ");
	printf("0x%lx\n", header.e_entry);
}

/**
 * open_file - open file for reading, check elf, and print elf header
 * @elf_file: file
 * @header: header
 *
 * Return: 0
 */
int open_file(char *elf_file, ELF64Hdr header)
{
	int fd;

	fd = open(elf_file, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", elf_file);
		exit(98);
	}
	if (read(fd, &header, sizeof(header)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", elf_file);
		exit(98);
	}
	if (!(header.e_ident[0] == 0x7f && header.e_ident[1] == 'E' &&
	    header.e_ident[2] == 'L' && header.e_ident[3] == 'F'))
	{
		dprintf(STDERR_FILENO, "%s is not an ELF file\n", elf_file);
		close(fd);
		exit(99);
	}
	printf("ELF Header:\n");
	print_magic(header);
	print_class(header);
	print_data(header);
	print_version(header);
	print_os_abi(header);
	print_abi_version(header);
	print_type(header);
	print_entry_point_address(header);
	return (0);
}

/**
 * main - Entry point, print elf header
 * @ac: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int ac, char *argv[])
{
	char *elf_file;
	ELF64Hdr header;
	
	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_file\n", argv[0]);
		exit(98);
	}
	elf_file = argv[1];
	open_file(elf_file, header);
	return (0);
}
