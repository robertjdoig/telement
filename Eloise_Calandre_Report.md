Please see my PDF as this is a complete write-up of my work across the game. 

I have highlighted all the text relating directly to blueprints in grey. 

I have really enjoyed working in blueprints and learned a lot. 
I find the process relatively intuitive, its easy to play around and test how the blueprints will affect the game. 
If it doesn’t work, its easy to continue trying new things without breaking the whole game. 



Here is the blueprints text from my PDF:

I began by creating a new game in Unreal with no starter content and used blueprints to set up First person actor with standard W,S,A,D pc controls. 
This was prior to setting up the group’s github repository, therefore I have no commits to show these blueprints.
In blueprints I created moving walls in the maze. The walls were set on a continuous loop to move from point to point, 
I changed the timing so that they pulled back slowly then slammed closed quickly, in an aim to build some tension in the game-play.
I created the grass material for the landscape using textures that I had created and in blueprints I set up the material to create random looking texture across the large area.
 The blueprint set up that I created was to firstly set up a tiling texture image using a texture coordinate node to define the tiling size, 
then repeat the use of this image using a multiply node to adjust the colour slightly and change the texture coordinates in each instance, 
so that the image becomes layered in a style that appears visually randomised. I also added another texture image to the same blueprint to give a variation to the grass, 
so that there were darker, muddy patch type areas included. A single normal map was used within the blueprint.
This is an example of another material that I created with variation using layers of texture samples. This time I used two normal maps, 
one to create the base texture and another to create the brick effect. I create a mask for the second normal map, however the mask uses on RB channels, 
therefore I needed to append a constant node to add a value to the B channel to complete the RGB channel.
Therefore, at this point I created a series of images in photoshop that I could use to create normal maps, 
and then used various blueprint designs to apply normal maps to Constant3Vector base coloured textures. 
This allows us to add damage or other details to the architecture whilst maintaining the use of a smooth fabricated visual style throughout the game.
When adding the glyphs to the wall, it was relatively tricky to get the symbol to sit in the centre of the mesh, 
and I had to use a texture coordinate of U 3.3, V 3.3 to manipulate the texture into the correct alignment. 
This was something that I had to play around with with different meshes when adding the normal maps to give texture to the base colours.
In material blueprints I set up vertex painting using Vertex Colour so that I could paint organically on meshes. 
I began this set up when still experimenting with the photo real textures, most of which were not used in the final version. 
However I developed this when using the normal maps to create details and damage, by using a 4-way blend vertex paiting setup. 
Initially I set up a 3-way blend, but realised that I needed the forth; alpha channel, to set a null channel that would leave the base colour unchanged:
The 4-way blend setup allowed me to paint a choice of 3 normal maps through the base colour, in order to apply damage in organic visual form to individual meshes. 
However there was no normal map attached to the base colour (for the Constant3Vector colour), this created a problem with the material colour overall when applied the 4-way blend, 
so I added a 50% grey placeholder normal map for the alpha channel, to provide a corresponding normal to the base colour that would not effect the actual colour value of the Constant3Vector.

I also created a rotating texture by accident when experimenting with material blueprints. I was aiming to rotate a static texture on a mesh, 
in order to create variation on different pillars between materials, and I called a Rotator node which added moving rotation. 
I decided to use this for another material on the central circular mesh above the door of the main chamber. 
Eventually I also managed to change the static rotation position for my pillar materials by calling a Custom Rotator node, and worked out that I needed a singular constant, 
plus a Constnant2Vector for the coordinates.
I created a glowing material for spikes in the game my manipulating the emissive colour with a GlowIntensity node set to 10.


