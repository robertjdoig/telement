# Introduction to Programming 2016 - Assignment 2  
**Pablo Larenas**  
** GAME LINK IN YOUTUBE:** 


#OVERALL

The game concept is play with a character chosen by the temple’s spirits to protect the ancient ruins and its relics from a coming menace. In the game the player control that character from a First Person perspective.
In this prototype, the player can play a demo version in which he can explore an introductory temple level, experimenting the key mechanics, to test and, therefore, validate several design aspects of it, such as puzzles, obstacles, UI and art (lights, atmosphere and aesthetics).
In this version of the game we currently have water, fire and air. With each element, the player can either absorb or cast the element from a mystical glove gun, activating or deactivating several triggerable objects to solve the puzzles. 

#ACTIVITIES AS LEAD/TECHNICAL ARTIST

My role consisted in managing both aesthetical and design criteria for the game, being responsible of the look and feel of it, and constantly working next to Matthew and Robert in the blueprint specifications, application and edition among the project. 
In the first part I actively participated in the briefing process (game concept, scope and level design criteria definition) with the rest of the team, documenting all process and sketching several ideas for the game (traps, props, mechanics, etc) 
During the pre-production stage, I modelled the dungeon kit used to prototype the level and created initial Blueprints for it.  

In the production stage, I designed and modelled the final meshes for the game, and built the complete version of the temple level. In parallel, I supervised my artist colleagues work, giving them orientation to their respective activities (texture work and 3d modelling assistance).  

Additionally, I counted with the knowledge and assistance of Matthew to work in the redesign of many puzzles and aspect of the level design. Similarly, I worked with Robert designing and applying several sounds FX for the game.  

Through the process, I worked very close with Matthew and Robert, who helped me to resolve blueprints and logic issues, while I gave them design inputs to develop their BP as well. Similarly, as lead artist, I kept the project’s files in order and tracked progress of several check list of activities we made between several project’s phases.  

Finally, as part of my documentation activities, I worked with Matthew in the video and presentation production.

![alt text](https://github.com/Pablolarenas/octet/blob/master/octet/assets/diamonds/idea_images/IMG-20161008-WA0000.jpg)
*Picture of the initial idea in the board*  


#WORKING WITH BLUEPRINTS

During the preproduction stage I created basic BP, using matinee actors for animations and basic triggers. The main idea was prototype basic interactions that could be understandable and used by programmers as a baseline. 
All these blueprints were perfected by Matthew and Robert when the interaction and mechanic requirements became more complex.  

**BASIC LEVER**  

The lever included an overlapping triggerable interaction and an Input key to activate the movement. Depending of the lever status (Boolean) the timeline can play or reverse, enabling the player up and down. The lever was changed later by an automatic one to facilitate the gameplay.  

**BASIC ELEVATOR**  

Considering overlapping a collision box as main interaction. The elevator movement was initially mad as a matinee actor, but due its lack of precision and customization as a blueprint, I changed the movement to a timeline applying a vector value to the Z axis.  

**BASIC SPIKES AND MOVING WALLS**  

I designed a basic BP before having a damage system. Just the movement to test the size and shape of the assets. Due this initial blueprint I could realize about the scale of those assets and their effect in game, being able to change them in an early stage.  

**ROLLING BALL**  

I also applied a Rolling ball in the first level design, applying physics to a sphere primitive mesh. As an exercise, the rolling ball allowed me to test the scale of the hallways and, therefore, edit some parameters of the room meshes. 
In the final version of the prototype, we include rolling balls but using a different technique (time line with two axis). Although the balls don’t roll as physical objects, we could control their movement with the timeline.  

**UI DESIGN**  
Besides the graphic design aspects, the UI was also worked with bindings to the First Person Character Blueprint (FPCB). 
As the FPCB controls ammo, player movements and gun, I created several Booleans to activate or deactivate the graphic interface in the UI graphs. Using these simple bindings, I enabled a Quest Log with two quests which updates themselves separately, an indicator of the selected type of ammo, indicators when player switch element, damage frame effect (blood), and controls in the tutorial room. Additionally, I edited the previous progress bar (heath and stamina) made by Robert, applying graphic assets and editing some of their parameters. Similarly I edited the Damage of spikes and spawners in their respective blueprints to balance the game experience.  

**BASIC PLAYER CONTROLS**  

To set and iterate with the dungeon kit assets in Unreal, I created a First Person Character camera-based controls. This basic control were then replaced with a more complex BP.  

**MATERIALS**  

As artist, I applied some material BP techniques, using masks and glowing materials. The graph view allowed me to easily iterate between textures and effects. 

**EDITING EXISTING BLUEPRINTS**  

Through several game test instances I must edit different parameters of several adding or subtracting delay time, creating variables to activate or deactivate UI elements, add and edit animation timelines, changing damage made by objects, speedof moving objects etc. The visual aspect of the blueprints facilitate my job as lead artist allowing me to easily edit those parameters without breaking the code.
   

