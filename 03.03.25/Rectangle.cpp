#include "Rectangle.h"

Rectangle* Rectangle::clone()
{
	Rectangle* fig = new Rectangle(*this);
	return fig;
}
