class kif_speedcam: Building
	{
		model = "\kif_client\models\speedcam\speedcam.p3d";
		scope = 2;
		displayName = "Speed Camera";
		vehicleclass = "kif_client";
		placement = "vertical";
		class Reflectors
		{
			class Flash
			{
				color[] = {3000,3000,3000};
				ambient[] = {5,5,5};
				position = "flash_start";
				direction = "flash_end";
				hitpoint = "flash";
				selection = "flash";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1.6;
				useFlare = "true";
				dayLight = "true";
				flareSize = 1;
				class Attenuation
				{
					start = 50;
					constant = 0;
					linear = 0;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
			};
		};
	};