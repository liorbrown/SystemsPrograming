part2: armor.o character.o main.o shiny.o
	gcc $^ -o $@

armor.o: src/armor.c Include/armor.h Include/shiny.h
	gcc -c $< -I ./Include -o $@

character.o: src/character.c Include/character.h Include/armor.h
	gcc -c $< -I ./Include -o $@

main.o: src/main.c Include/character.h Include/armor.h Include/shiny.h
	gcc -c $< -I ./Include -o $@

shiny.o: src/shiny.c Include/shiny.h
	gcc -c $< -I ./Include -o $@

.PHONY: clean

clean:
	rm -f *.o part2