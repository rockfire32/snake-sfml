#include <Snake/Snake.h>

using namespace SnakeSfml;

Snake::Snake(const sf::Vector2f& start_point) {
	pos_.push_back(start_point);
}

void Snake::Update() {
	sf::Vector2f prev_pos = pos_[0];

	MoveHead(prev_pos);

	for ( size_t i = 1; i < pos_.size(); ++i ) {
		std::swap(pos_[i], prev_pos);
	}
}

void Snake::SetStep(double step) {
	step_ = step;
}

void Snake::SetDirection(const Direction dir) {
	dir_ = dir;
}

const std::vector<sf::Vector2f>& Snake::GetPosOfSnakeElements() const {
	return pos_;
}

void Snake::MoveHead(sf::Vector2f& head) {
	switch ( dir_ )
	{
		case Direction::UP: head.y -= step_; break;	
		case Direction::DOWN: head.y += step_; break;	
		case Direction::LEFT: head.x -= step_; break;	
		case Direction::RIGHT: head.x += step_; break;
		case Direction::NONE: break;
	}
}

