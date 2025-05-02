#pragma once
 
 #include "CoreMinimal.h"
 
 
 #define DRAW_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location, 25.f, 12, FColor::Red, true);
 // this will draw a sphere at the location with a radius of 25 units and 12 segments.
 

// new code than previous code: 
 #define DRAW_LINE(StartLocation, EndLocation) if (GetWorld()) DrawDebugLine(GetWorld(), StartLocation, EndLocation, FColor::Red, true, -1.f, 0, 1.f);
 // this will draw a line from StartLocation to EndLocation with a color of red and a thickness of 1 unit.