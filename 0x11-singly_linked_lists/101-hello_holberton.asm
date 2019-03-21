          global    main
          extern    printf

          section   .text
main:
          mov	rsi, sentence
	  mov   rdi, format
	  xor rax, rax
	  call printf
	  ret

	  section .data
format: db  `%s\n`,0
sentence: db "Hello, Holberton",0
