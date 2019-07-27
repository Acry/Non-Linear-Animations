

# Non linear animations

In the [surfaces-series](https://github.com/Acry/SDL2-Surfaces) I did some naive linear animations and scaling. This is a demo series about non linear animations. To get more control I am gonna use floats here, now I need some non linear functions. Math provides tons of those functions. In computer graphics shaping functions are well known and used to create procedural graphics, too. But, one can use those functions also to shape the time-steps, positions or colors.

Just for getting in, `1.c` does normalized linear raise of the y-value.

###Impulse

Grows quickly, falls off slowly.
![](impulse_n.png)
Great for triggering behaviors or making envelopes for music or animation, and for anything that grows fast and then slowly decays.

Smaller values are looking better.

Use k to control the stretching of the function.
It's maximum, which is 1.0, happens at exactly x = 1/k.

C-Function:
```c   
float impulse( float k, float x )
{
    float h = k*x;
    return h*expf(1.0-h);
}
```

My 2 dimensional, linear, non logarithmic branded way of thinking, naively thinks about x and y coordinates. Not going to fight my brain here. Do simple things first.

Note:
The mathplotlib sources in Python 3 for the diagrams are in the source directory.
One can use them to show the diagrams interactive or print higher resolutions.

####Implement an animation with x and y values.
The duration will be 5 seconds.
K is a constant  - I am going to plug 1.5 in here, so the curve should look like this:
![](impulse.png)
That means that the y-value of the actor will be maxed after less than a second and slowly moves to the ground.

So k and t went into the function, returning a float between 0.0 and 1.0, which was used as height in percentage. Just remember SDL's Y starts at 0, so that the actual current height is:
`pos.y = max_h-y;`

### Useful links
[SDL2](https://www.libsdl.org/) / [SDL-Discourse](https://discourse.libsdl.org)  

[My SDL2 Demo-Collection](https://acry.github.io/c.html)

[Contact me](https://acry.github.io/#contact)
