## Lessons Learned

### What I got wrong

I underestimated the importance of seperation between display and world.
I misjudged that the world module could handle displaying; printing letters to console, for this application. 

Once that I recognized that the decoupling is inevitable was when the branches of dependency tree entangle. If the world module could both decide the rules of the world and display its properties, then it must depends on:
    - entity (to display entities; e.g player) 
    - physics (to compute the collision and moves)
That is, world module would be a GOD module.

The belief that toy project could be managed freely does not mean permission to coupling modules. Building a cohesive system starts from the seperation of interest; displaying to the console and populating display buffer with some symbols is different.

