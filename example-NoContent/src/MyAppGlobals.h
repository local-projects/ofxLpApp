//
//  MyAppColors.h
//
//  Created by Oriol Ferrer Mesià on 13/04/15.
//
//

#pragma once

#include "ofxAppGlobalsBasic.h"

class MyAppGlobals : public ofxAppGlobalsBasic{

public:
	
	void setupRemoteUIParams(){		
		RUI_SHARE_PARAM(tileSpeed, 0, 1);
	};

	float tileSpeed = 0.5;
};

