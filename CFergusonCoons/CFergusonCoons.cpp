
#include	"CFergusonCoons.h"

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

//	Constructor
CFergusonCoons::CFergusonCoons()
{
	m_Point1	= 0.0d;
	m_Point2	= 0.0d;
	m_Control1	= 0.0d;
	m_Control2	= 0.0d;

	//	return _ _ Constructor
	return;
}

CFergusonCoons::CFergusonCoons(double p1, double c1, double p2, double c2)
{
	m_Point1	= p1;
	m_Point2	= p2;
	m_Control1	= c1;
	m_Control2	= c2;

	//	return _ _ Constructor
	return;
}

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

//	始点情報設定
void CFergusonCoons::SetStart(double p1, double c1)
{
	SetPointStart(p1);
	SetControlStart(c1);

	//	return _ _ CFergusonCoons::SetStart
	return;
}

//	終点情報設定
void CFergusonCoons::SetEnd(double p2, double c2)
{
	SetPointEnd(p2);
	SetControlEnd(c2);

	//	return _ _ CFergusonCoons::SetEnd
	return;
}

//	座標点情報設定
void CFergusonCoons::SetPoint(double p1, double p2)
{
	SetPointStart(p1);
	SetPointEnd(p2);

	//	return _ _ CFergusonCoons::SetPoint
	return;
}

//	制御点情報設定
void CFergusonCoons::SetControl(double c1, double c2)
{
	SetControlStart(c1);
	SetControlEnd(c2);

	//	return _ _ CFergusonCoons::SetControl
	return;
}

//	データ設定
void CFergusonCoons::SetParam(double p1, double c1, double p2, double c2)
{
	SetPointStart(p1);
	SetControlStart(c1);
	SetPointEnd(p2);
	SetControlEnd(c2);

	//	return _ _ CFergusonCoons::SetParam
	return;
}

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

//	補正点取得
double CFergusonCoons::GetPoint(double t)
{
	//	Local Data
	double	ret;

#if	0	//	-----=-----=-----=	=-----=-----=-----

	double	a,b,c,d;

	a		= 2 * m_Point1 - 2 * m_Point2 + m_Control1 + m_Control2;
	b		= -3 * m_Point1 + 3 * m_Point2 - 2 * m_Control1 - m_Control2;
	c		= m_Control1;
	d		= m_Point1;

	ret		= t * t * t * a
			+ t * t * b
			+ t * c
			+ d;

#else	//	-----=-----=-----=	=-----=-----=-----

	double	val1,val2;

	val1	= (t - 1.0);
	val2	= (1.0 - t);
	ret		= ((val1 * val1) * (2 * + 1)) * m_Point1
			+ ((t * t) * (3 - 2 * t)) * m_Point2
			+ ((val2 * val2) * t) * m_Control1
			+ ((val1 * va1) * (t * t)) * m_Control2;

#endif	//	-----=-----=-----=	=-----=-----=-----

	//	return _ _ CFergusonCoons::GetPoint
	return ret;
}

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

