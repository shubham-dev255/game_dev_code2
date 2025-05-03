// the below program is a custom header file that contains macros for making debug drawings in Unreal Engine 4.
// the program below is from slash.h header file.
#pragma once
#include "DrawDebugHelpers.h" 
#define DRAW_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, true);
#define DRAW_LINE(StartLocation, EndLocation) if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f);
#define DRAW_POINT(Location) if (GetWorld()) DrawDebugPoint(GetWorld(), Location, 15.f, FColor::Red, true);
#define DRAW_VECTOR(StartLocation, EndLocation) if (GetWorld()) \
 	{ \
 		DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f); \
 		DrawDebugPoint(GetWorld(), EndLocation, 15.f, FColor::Red, true); \
 	}