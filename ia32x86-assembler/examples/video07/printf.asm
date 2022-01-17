          global    main
          extern    puts

          section   .text
main:                                       ; This is called by the C library startup code
          push      message
          call      puts                    ; puts(message)
          ret                               ; Return from main back into C library wrapper
          section .data
message:
          db        "Hola, mundo", 0        ; Note strings must be terminated with 0 in C    