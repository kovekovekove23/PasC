PasC is a DSL (Domain-Specific Language) language, which was inspired by the Pascal syntax, designed to make it easier to write code on a phone and not only.
----
PasC is not about making C high-level, but about making low-level programming clearer and more convenient.


----
How to start:
1.Download pasc.h
2.include it in your .c or cpp file:
#include<pasc.h>
func(void, DrawCube, int *len) go
i y = 0;
i x = 0;

cycle(y, *len, 0)

ifsm(x, *len) go

if (ceq(y, 0) || ceq(y, *(len) - 1) || ceq(x, 0) || ceq(x, *(len) - 1)) go
pt(".");
end other go
pt(" ");
end
x++;
end //if end

other go
pt("\n");
x = 0;
y++;
end //other end

end //ifsm end

end //cycle end

start
int len = 20;
DrawCube(&len);
end



-----
"Hello World!" in this language:
#include<pasc.h>
start
pt("Hello World!");
end
