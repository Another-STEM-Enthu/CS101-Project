--------------------------------------------------------------------CS101 Project, Autumn Semester 2021-2022-----------------------------------------------------------------------

Deshpande Varad Shailesh, 21D070024
D1-T4

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Link to recorded videos:
https://drive.google.com/drive/folders/1PxwULh9S3DSjYAZbp4O_p8MxuUFD6Zml?usp=sharing





Recording made using OBS Studio.



Bubble Trouble was a popular Minigame. It is a pleasure to make an attempt at replicating the game I played some 12 years ago!

The project was implemented using simplecpp.



Features implemented in the project:
--------

Required Features:
-----------------
a. Modify the bubble movement to incorporate vertical motion such that the bubbles travel in a parabolic path. When the ball hits the horizontal ground, it should bounce off the ground.
b. Introduce collision between the bubble and the bullet; the bubble disappears after a bullet hits it. After a collision, you can make the bullet disappear too.
c. Introduce collision between the bubble and the shooter; the shooter is dead if a bubble touches it.

----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



Extra Features:
--------------
1. Multi-sized bubbles
Different sizes for each level. Larger bubbles split into 2 bubbles, both moving in opposite x-directions, with same speed and of half the radius when a shooter hits them.
(They move vertically as well, in a parabolic trajectory)

2. Game Structure:
Levels : 3 levels are implemented. Colour of bubbles different in each level. Speed,size and number of bubbles increases for subsequent levels.


3. Game Stats
	a. Health counter: shows how many lives are left, bottom right of game window.
	b. Score: +10 for each hit of bubble of any size by bullet. -30 if a bubble hits the shooter. Bottom-centre of the game window.
	c. Timer: Accurate to roughly 5 percent of gameplay time. 
	  A steadily changing,non-flickering countdown in bottom right of game window. 30s for Level 1. 45 seconds for Levels 2 and 3. Game is over if time runs out before a level is cleared.

4. Game Flow
A 2 second pause is taken with a display message at centre of screen if:
	a. Bubble hits the shooter, saying "Respawning...." and shooter cannot move for that duration.
	b. Between change of levels, indicating the upcoming level. All bullets are cleared at the end of each level.

5. Functionality to pause game by pressing 'p'
When 'p' is pressed, all motion is halted. Timer stops counting down.
Once 'p' is pressed again, the game resumes, timer starts counting down again.

6. Message indicating status of game at end of each gameplay
If the gamplay is over due to either of:
	a. Time running out at a certain level
	b. Health is over.
Then the message displays "Game Over!" on the screen and the program stops executing.

If all levels are successfully cleared by the player,
Then the message displays "You have completed the game!" on the screen and the program stops executing.


---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


I am grateful for having an opportunity to work on this project. Thank you Sir!





