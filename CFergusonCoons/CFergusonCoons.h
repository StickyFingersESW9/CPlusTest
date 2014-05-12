
#ifndef		__INC_FERGUSON_COONS_H__
#define		__INC_FERGUSON_COONS_H__

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

class	CFergusonCoons
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
	CFergusonCoons();
	CFergusonCoons(double, double, double, double);
	//	Destructor
	virtual	~CFergusonCoons(){}

	//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

	//	始点設定
	void		SetPointStart	(double p){m_Point1		= p}
	//	終点設定
	void		SetPointEnd		(double p){m_Point2		= p}
	//	始制御点設定
	void		SetControlStart	(double p){m_Control1	= p}
	//	終制御点設定
	void		SetControlEnd	(double p){m_Control2	= p}

	//	始点情報設定
	void		SetStart		(double, double);
	//	終点情報設定
	void		SetEnd			(double, double);
	//	座標点情報設定
	void		SetPoint		(double, double);
	//	制御点情報設定
	void		SetControl		(double, double);

	//	データ設定
	void		SetParam		(double, double, double, double);

	//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

	//	補正点取得
	double		GetPoint		(double);

	//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/
};

//	_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/_/

#endif	//	__INC_FERGUSON_COONS_H__

