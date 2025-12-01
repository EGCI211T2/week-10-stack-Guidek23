compile: main.cpp
	g++ main.cpp -o stack1

run: ./stack1
	./stack1 

compile2: main2.cpp
	g++ main2.cpp -o stack2

test1: ./stack2
	./stack2 {[]}[] {[]] [] {{  }}

test2: ./stack2
	./stack2 {[]}[]

test3: ./stack2
	./stack2 {[]

test4: ./stack2
	./stack2 {[}]

test5: ./stack2
	./stack2 {{

test6: ./stack2
	./stack2 {{}}

compile3: main3.cpp
	g++ main3.cpp -o stack3

food1: ./stack3
	./stack3 x 

food2: ./stack3
	./stack3 4 1 x 2 2 x

food3: ./stack3
	./stack3 1 2 3 2 x 3 2

food4: ./stack3
	./stack3 2 2 2 1 3 5 x 1 1 3 5 3 2 4 1 x x x

