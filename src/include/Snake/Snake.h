#ifndef SNAKE_SFML_INCLUDE_SNAKE_SNAKE_H_
#define SNAKE_SFML_INCLUDE_SNAKE_SNAKE_H_

#include <cstdlib>
#include <vector>
#include <utility>

#include <SFML/System/Vector2.hpp>

#include <Directions.h>

namespace SnakeSfml
{
	class Snake
	{
		public:
			Snake(const sf::Vector2f& start_point);

			void Update();
			void SetStep(double step);
			void SetDirection(const Direction dir);

			const std::vector<sf::Vector2f>& GetPosOfSnakeElements() const;

		private:
			double step_ = 0.0;
			
			Direction dir_ = Direction::NONE;
			std::vector<sf::Vector2f> pos_;

			void MoveHead(sf::Vector2f& head);
	};
}

#endif // SNAKE_SFML_INCLUDE_SNAKE_SNAKE_H_
