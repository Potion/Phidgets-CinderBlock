#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

#define CI_MIN_LOG_LEVEL 0
#include "cinder/Log.h"

#include "poPhidgets/PhidgetVoltageRatioInput.h"


using namespace ci;
using namespace ci::app;
using namespace std;



class BasicVoltageRatioApp : public App
{
	public:
		void setup() override;
		void mouseDown( MouseEvent event ) override;
		void update() override;
		void draw() override;
		void keyDown( KeyEvent event ) override;

		po::phidget::VoltageRatioInputRef mInput;
};

void BasicVoltageRatioApp::setup()
{
	mInput = po::phidget::VoltageRatioInput::create( -1, 5 );

}

void BasicVoltageRatioApp::mouseDown( MouseEvent event )
{
}

void BasicVoltageRatioApp::keyDown( KeyEvent event )
{
	if( event.getChar() == 'q' || event.getChar() == 'Q' ) {
		quit();
	}
}

void BasicVoltageRatioApp::update()
{
}

void BasicVoltageRatioApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) );
}

CINDER_APP( BasicVoltageRatioApp, RendererGl )
