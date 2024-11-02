# HOT LAPPERS: Racing Game

HOT LAPPERS is a text-based racing game where several cars compete on a track to be the fastest to reach the finish line. Each car advances by a random distance on each turn, and the first car to reach the assigned finish line, wins the race. As a player you can watch each cars progress turn by turn, making randomly interesting who will be the champion of the tournament.

ALGORITHM OF THE GAME

Start the Game:
  1- Define the race track length.
  2- Create cars with different advancing power.
The Race:
  3- On every turn, the cars move a random distance based on its advance.
  4- Print each cars progress after every turn.
The Winner:
  5- Analyze when a car reaches the finish line.
  6- Declare the first car to reach it.
The Podium:
  7- Show the final positions of the cars.
  8- Celebration!

CLASSES OF THE GAME

1. Cars (Base class)
  - Represents the car with name and position, and a virtual method to advance.
    Methods:
    - advance(): for moving forward.
    - position(): return the cars current position.
2. Ferrari (Derived Class)
  - A type of car that advances really fast.
    Methods:
    - advance(): with high units, but unconsistent.
3. Porsche (Derived Class)
  - A type of car that advances consistenly.
    Methods:
    - advance(): with medium units, but consistent range.
4. Bugatti (Derived Class)
  - - A type of car that advances fast, but unconsistent.
      Methods:
      - advance(): with higher max units, but high range.
5. Race Track
  - Manages the track length, initiates the race, and checks the finish line.
    Methods:
    - finishLine(): checks if any car reached the finish line.
    - greenFlag(): calls advance() for each car in each turn and determines the winner.

This game demonstrates inheritance and polymorphism by allowing different types of cars to share a common interface (Cars) but have unique behaviors. Each brand (Ferrari, Porsche, Bugatti) have their own advance() implementation, showcasing polymorphic behavior. The Race Track class then leverages polymorphism by calling advance() on each Car without needing to know its brand, highlighting the power of C++ OOP principles in creating flexible and scalable code. This project is an excellent entry point to C++ concepts and helps in building foundational skills in object-oriented programming.  
