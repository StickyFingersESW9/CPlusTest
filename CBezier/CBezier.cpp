
#include	"CBezier.h"

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

//	Constructor
CBezier::CBezier()
{
	m_Point1	= 0.0;
	m_Point2	= 0.0;
	m_Control1	= 0.0;
	m_Control2	= 0.0;

	//	return _ _ Constructor
	return;
}

CBezier::CBezier(double p1, double c1, double p2, double c2)
{
	m_Point1	= p1;
	m_Point2	= p2;
	m_Control1	= c1;
	m_Control2	= c2;

	//	return _ _ Constructor
	return;
}

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

//	ベジェ始点情報設定
void CBezier::SetStart(double p1, double c1)
{
	SetPointStart(p1);
	SetControlStart(c1);

	//	return _ _ CBezier::SetStart
	return;
}

//	ベジェ終点情報設定
void CBezier::SetEnd(double p2, double c2)
{
	SetPointEnd(p2);
	SetControlEnd(c2);

	//	return _ _ CBezier::SetEnd
	return;
}

//	ベジェ座標点情報設定
void CBezier::SetPoint(double p1, double p2)
{
	SetPointStart(p1);
	SetPointEnd(p2);

	//	return _ _ CBezier::SetPoint
	return;
}

//	ベジェ制御点情報設定
void CBezier::SetControl(double c1, double c2)
{
	SetControlStart(c1);
	SetControlEnd(c2);

	//	return _ _ CBezier::SetControl
	return;
}

//	ベジェデータ設定
void CBezier::SetParam(double p1, double c1, double p2, double c2)
{
	SetPointStart(p1);
	SetControlStart(c1);
	SetPointEnd(p2);
	SetControlEnd(c2);

	//	return _ _ CBezier::SetParam
	return;
}

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

//	ベジェ補正点取得
double CBezier::GetPoint(double t)
{
	//	Local Data
	double	ret;
	double	t2	= 1.0 - (t);

	ret		= t2 * t2 * t2 * m_Point1
			+ 3 * t * t2 * t2 * m_Control1
			+ 3 * t * t * t2 * m_Control2
			+ t * t * t * m_Point2;

	//	return _ _ CBezier::GetPoint
	return ret;
}

//	ベジェ座標、制御点の最小取得
double CBezier::GetRangeMin(void)
{
	//	Local Data
	double	ret;

	ret		= (m_Point1 > m_Control1 ? m_Control1 : m_Point1);
	ret		= (ret > m_Point2 ? m_Point2 : ret);
	ret		= (ret > m_Control2 ? m_Control2 : ret);

	//	return _ _ CBezier::GetRangeMin
	return ret;
}

//	ベジェ座標、制御点の最大取得
double CBezier::GetRangeMax(void)
{
	//	Local Data
	double	ret	= m_Point1;

	ret		= (m_Point1 < m_Control1 ? m_Control1 : m_Point1);
	ret		= (ret < m_Point2 ? m_Point2 : ret);
	ret		= (ret < m_Control2 ? m_Control2 : ret);

	//	return _ _ CBezier::GetRangeMax
	return ret;
}

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

