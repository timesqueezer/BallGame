#if !defined(_BALL_H)
#define _BALL_H

class Ball
{
public:
	int             m_X, m_Y;           // Position
	int             m_Vx, m_Vy;         // velocity
	float			m_R;				// Radius

public:
	Ball();
	void            Update(float time);

	void            Reset();
};

#endif  // _BALL_H
