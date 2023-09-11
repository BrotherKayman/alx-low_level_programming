#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
/**
* display_elf_header: Displays the information contained in the ELF header
* @header: ..
*/
void display_elf_header(const Elf64_Ehdr *header)
{
int i;
printf("Magic:\t");
for (i = 0; i < EI_NIDENT; i++)
printf("%02x \t", header->e_ident[i]);
printf("\nClass: %s\t", header->e_ident[EI_CLASS]
== ELFCLASS64 ? "ELF64" : "ELF32");
printf("Data:\t %s\t", header->e_ident[EI_DATA]
== ELFDATA2LSB ? "2's complement, little endian" : "Unknown");
printf("Version:\t %d (current)\n", header->e_ident[EI_VERSION]);
printf("OS/ABI: %d\t", header->e_ident[EI_OSABI]);
printf("ABI Version: %d\t", header->e_ident[EI_ABIVERSION]);
printf("Type: %s\t", header->e_type == ET_EXEC ? "EXEC (Executable file)" :
(header->e_type == ET_DYN ? "DYN (Shared object file)" :
(header->e_type == ET_REL ? "REL (Relocatable file)" : "Unknown")));
printf("Entry point address: 0x%lx\t", (unsigned long)header->e_entry);
}
/**
* main - Entry Point
* @argc: ..
* @argv: ..
* Return: 0 or 98
*/
int main(int argc, char *argv[])
{
Elf64_Ehdr elf_header;
int fd;
if (argc != 2)
{
fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
return (98);
}
fd = open(argv[1], O_RDONLY);
if (fd == -1)
{
perror("Error opening file");
return (98);
}
if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
{
perror("Error reading ELF header");
close(fd);
return (98);
}
if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
{
fprintf(stderr, "Error: Not an ELF file\n");
close(fd);
return (98);
}
display_elf_header(&elf_header);
close(fd);
return (0);
}
