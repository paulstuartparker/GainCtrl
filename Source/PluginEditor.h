/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class NewProject2AudioProcessorEditor  : public AudioProcessorEditor
{
public:
    NewProject2AudioProcessorEditor (NewProject2AudioProcessor&);
    ~NewProject2AudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    Slider mGainControlSlider;
    NewProject2AudioProcessor& processor;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (NewProject2AudioProcessorEditor)
};
