#include "EnemyBullet.h"


EnemyBullet::EnemyBullet()
{
}


EnemyBullet::~EnemyBullet()
{
	delete[] bullets;
}

void EnemyBullet::drawBullet(int i)
{

	useBrush(1, RGB(20,160,0));
	drawRectangle(bullets[i].posX, bullets[i].posY, bullets[i].posX + 5, bullets[i].posY + 10);
	bullets[i].posY += 10;
}
void EnemyBullet::deleteAll()
{
	delete[] bullets;
}
void EnemyBullet::deletePassing(void)
{
	for (int i = 0;i<bulletnum;i++)
	{
		if (bullets[i].posY>590)
			deleteBullet(i);
	}
}