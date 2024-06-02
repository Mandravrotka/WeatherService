#pragma once

#include<iostream>

class Weather
{

	virtual Weather getWeather(std::string s) = 0;

};