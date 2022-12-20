## What Does mean memberwise copy ??
> A memberwise copy is a copy that requires an intimate knowledge of the structure of the data that it's being copied.

## What on earth is a copy constructor ??

Whenever our code contains a set of instructions that requires the creation of a copy of our objects the copy constructor gets called. Well this copy constructor is not alwasys defined by the programmer, there's a so-called synthesized copy constructor that the compiler synthesize and it's known of yielding a shallow copy. This shallow copy does not always satisfy our needs and hence the definition of a copy constructor is crucial.

One of those lines of code that requires the creation of copy, the following:
* Initializing an object through the "=" operator with another object of the same type.
* Returning a given object from a function.
* or passing an object to a function.

Just by playing around with some cpp code we can observe, that: 
If we have declared a copy constructor inside our class, and we don't define it, a case of the ones above yields a compilation error telling that `Undefined Refrence to [copy constructor prototype]`. When in fact, the absence of a declared copy constructor will compile flawlessly. The thing is that the compiler will synthesize a **Default Copy Constructor**. 

A call to the copy constructor will always have place, when the creation of copy has place. But we some distinguish different cases here:
### The absence of a defined copy constructor:
There'll be a call to the default copy constructor, which will give birth of a shallow copy. This copying procedure will be flawed, for instance in the presence of a dynamic allocation of memory, just the pointers get copied and not their emplacement in the memory, the first issue to care about is the occurence of a *double free* while destroying the object.
### The existence of a defined copy constructor
From our code we can define a copy constructor, it is a public member function that has the same name as the constructor, that takes a const or nonconst reference to the object it's copying. This time there's no shallow copy, the defined copy constructor takes care of all the job. Setting this member function to private will cause compilation errors.

## Comments:
> C++ imposes that the sole argument of the copy constructor is passed by reference. This makes sense as passing by value will issue a call to the copy constructor itself so this declaration : Student( Student ) is incorrect.

> Knowing that a copy constructor can have both prototypes *Student( Student &)* and *Student (const Student &)* and could both have place inside a class. All in all, a copy constructor will usualy be reading the object it's copying and it will not overwrite the object. So it fully makes sense that the sole argument of this constructor to be a const reference.