#pragma once

class CBlender_postprocess_combine : public IBlender  
{
public:
	virtual		LPCSTR		getComment()	{ return "INTERNAL: combiner";	}
	virtual		BOOL		canBeDetailed()	{ return FALSE;	}
	virtual		BOOL		canBeLMAPped()	{ return FALSE;	}

	virtual		void		Compile			(CBlender_Compile& C);

	CBlender_postprocess_combine();
	virtual ~CBlender_postprocess_combine();
};