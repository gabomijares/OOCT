# HOT LAPPERS: Racing Game

HOT LAPPERS is a text-based racing game where several cars compete on a track to be the fastest to reach the finish line. Each car advances by a random distance on each turn, and the first car to reach the assigned finish line, wins the race. As a player you can watch each cars progress turn by turn, making randomly interesting who will be the champion of the tournament.

ALGORITHM OF THE GAME

- Start the Game:
  1. Create cars with different advancing power and pit stop time.
  2. Define race track length.
- The Race:
  3. On every turn, the player presses advance, and the cars move a random distance based on its range of advance per turn.
  4. Every car gets random turns to wait for pit stops, and has to wait for their own amount of turns.
  5. Print each cars progress after every turn to show position.
- The Winner:
  6. Analyze when a car reaches the finish line.
  7. Declare the first car to reach it.
- The Podium:
  8. Show the final positions of the cars.
  9. Celebration!

CLASSES OF THE GAME

1. Car (Superclass):
Attributes:
- Name
- Position
- Pit Stop
- Pit stop time
- Pit stop turns
Methods:
  - advance(): for moving forward.
  - position(): return the cars current position.
  - pitStop: for holding cars in pits.
2. Ferrari (Derived Class):
Attributes:
- Name: Ferrari
- Position
- Pit stop time
Methods:
  - advance(): Advances a random number (between 2-6) per turn.
  - position(): return the cars current position.
  - pitStop: Holds in pit stop for a random number of turns (between 2-3).
3. Red Bull (Derived Class):
Attributes:
- Name: RedBull
- Position
- Pit stop time
Methods:
  - advance(): Advances a random number (between 3-5) per turn.
  - position(): return the cars current position.
  - pitStop: Holds in pit stop for a random number of turns (between 1-3).
4. McLaren (Derived Class):
Attributes:
- Name: McLaren
- Position
- Pit stop time
Methods:
  - advance(): Advances a random number (between 1-7) per turn.
  - position(): return the cars current position.
  - pitStop: Holds in pit stop for a random number of turns (between 1-2).
5. RaceTrack:
Attributes:
- Track Length
- Cars Positions
- Finish Line
Methods:
- greenFlag(): calls advance() for each car in each turn.
- positions(): returns every cars position.
- finishLine(): checks if any car reached the finish line and determines the winner.
  
HOT LAPPERS is an excellent starting point for learning Object-Oriented Programming (OOP) as it integrates key concepts in a practical, engaging way. It introduces classes to define objects such as Car, RaceTrack, and specific car teams like Ferrari or RedBull, showcasing how to encapsulate data and behavior with attributes (e.g., position, team) and methods (e.g., advance(), addCar()). The use of inheritance is demonstrated by creating subclasses (Ferrari, McLaren, RedBull) that extend the base Car class, allowing specialized behaviors for each team while reusing shared functionality. The program also highlights composition, as the RaceTrack class manages a collection of Car objects, demonstrating how objects can interact. Additionally, it leverages vectors to store and manipulate a dynamic list of cars, introducing students to an essential data structure for handling collections. By combining these OOP principles in a coherent project, the program provides a solid foundation for understanding how to design and implement complex, modular, and scalable systems.

UML Diagram:
![image](https://github.com/user-attachments/assets/621e97c2-3f93-4f0d-8064-abbf23214d8d)


