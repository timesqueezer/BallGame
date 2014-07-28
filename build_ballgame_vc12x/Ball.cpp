/*
* (C) 2001-2012 Marmalade. All Rights Reserved.
*
* This document is protected by copyright, and contains information
* proprietary to Marmalade.
*
* This file consists of source code released by Marmalade under
* the terms of the accompanying End User License Agreement (EULA).
* Please do not use this program/source code before you have read the
* EULA and have agreed to be bound by its terms.
*/

#include "IwGx.h"
#include "Ball.h"

Ball::Ball() {}

void Ball::Update(float time)
{
	m_X = m_X + (m_Vx * time);
	m_Y = m_Y + (m_Vy * time);
}

void Ball::Reset()
{
	m_X = (float)IwGxGetScreenWidth() / 2;
	m_Y = (float)IwGxGetScreenHeight() / 2;
	m_Vx = (float)IwGxGetScreenWidth() / 10;
	m_Vy = (float)IwGxGetScreenHeight() / 10;
}




