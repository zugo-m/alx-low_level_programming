          global    main
          extern    printf

          section   .text
main:
          mov	esi, sentence
	  mov   edi, format
	  xor eax, eax
	  call printf
	  ret

	  section .data
format: db  `%s\n`,0
sentence: db "Hello, Holberton",0
