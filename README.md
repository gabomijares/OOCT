# HOT LAPPERS: Racing Game

HOT LAPPERS is a text-based racing game where several cars compete on a track to be the fastest to reach the finish line. Each car advances by a random distance on each turn, and the first car to reach the assigned finish line, wins the race. As a player you can watch each cars progress turn by turn, making randomly interesting who will be the champion of the tournament.

ALGORITHM OF THE GAME

- Start the Game:
  1. Define the race track length.
  2. Create cars with different advancing power and pit stop.
- The Race:
  3. On every turn, the cars move a random distance based on its advance.
  4. Every car has a random turn to wait for pit stops.
  5. Print each cars progress after every turn.
- The Winner:
  6. Analyze when a car reaches the finish line.
  7. Declare the first car to reach it.
- The Podium:
  8. Show the final positions of the cars.
  9. Celebration!

CLASSES OF THE GAME

1. Cars (Base class):
- Represents the car with name and position, and a virtual method to advance.
Methods:
  - advance(): for moving forward.
  - position(): return the cars current position.
2. Ferrari (Derived Class):
- A team who is not the fastest, but consistent and good strategy.
- Methods:
  - advance(): with low units, but consistent and low range.
  - pits(): low pits stop time.
3. Red Bull (Derived Class):
- A team who is fast and consistent.
- Methods:
  - advance(): with medium units, and consistent.
  - pits(): normal pits stop time.
4. McLaren (Derived Class):
- A type of car that advances fast, but unconsistent.
- Methods:
  - advance(): with higher units, but high range.
  - pits(): slow pits stop time.
5. Race Track:
- Manages the track length, initiates the race, and checks the finish line.
- Methods:
  - finishLine(): checks if any car reached the finish line.
  - greenFlag(): calls advance() for each car in each turn and determines the winner.

This game demonstrates inheritance and polymorphism by allowing different types of cars to share a common interface (Cars) but have unique behaviors. Each brand (Ferrari, Redbull, McLaren) have their own advance() and pits() implementation, showcasing polymorphic behavior. The Race Track class then leverages polymorphism by calling advance() on each Car without needing to know its brand, highlighting the power of C++ OOP principles in creating flexible and scalable code. This project is an excellent entry point to C++ concepts and helps in building foundational skills in object-oriented programming.  


UML Diagram:
![image](https://github.com/user-attachments/assets/b2979c57-0a23-4970-aea8-2d4289a1675f)
