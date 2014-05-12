
#ifndef		__INC_BEZIER_H__
#define		__INC_BEZIER_H__

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

class	CBezier
{
//	class member
private:
protected:
	double		m_Point1,m_Point2;
	double		m_Control1,m_Control2;

public:

//	class method
private:
protected:
public:
	//	Constructor
	CBezier();
	CBezier(double, double, double, double);
	//	Destructor
	virtual	~CBezier(){}

	//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

	//	ベジェ始点設定
	void		SetPointStart	(double p){m_Point1		= p;}
	//	ベジェ終点設定
	void		SetPointEnd		(double p){m_Point2		= p;}
	//	ベジェ始制御点設定
	void		SetControlStart	(double p){m_Control1	= p;}
	//	ベジェ終制御点設定
	void		SetControlEnd	(double p){m_Control2	= p;}

	//	ベジェ始点情報設定
	void		SetStart		(double, double);
	//	ベジェ終点情報設定
	void		SetEnd			(double, double);
	//	ベジェ座標点情報設定
	void		SetPoint		(double, double);
	//	ベジェ制御点情報設定
	void		SetControl		(double, double);

	//	ベジェデータ設定
	void		SetParam		(double, double, double, double);

	//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

	//	ベジェ補正点取得
	double		GetPoint		(double);
	//	ベジェ座標、制御点の最小取得
	double		GetRangeMin		(void);
	//	ベジェ座標、制御点の最大取得
	double		GetRangeMax		(void);

	//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
};

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

#endif	//	__INC_BEZIER_H__

