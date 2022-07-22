CC=gcc

add-nbo: add-nbo.c 
	$(CC) add-nbo.c -o add-nbo

clean:
	rm -f add-nbo