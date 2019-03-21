          global    main
          extern    printf

          section   .text
main:
	  mov   edi, format
	  xor   eax, eax
	  call  printf
	  ret

	  section .data
format: db `Hello, Holberton\n`,0
