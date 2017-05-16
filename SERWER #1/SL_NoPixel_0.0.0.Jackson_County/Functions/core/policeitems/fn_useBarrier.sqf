params ["_barrier"];
attachedbarrier = true;

_pia = ["NP_8mPoliceLine","NP_4mPoliceLine","NP_1mPoliceLine","NP_PoliceBarrierL","NP_PoliceBarrierS","kif_item_barrierPlastic", "kif_item_barrierBollard", "kif_item_trafficCone", "kif_item_roadCone", "kif_item_roadConeLight", "kif_item_barGate"] find _barrier;
_barrier = ["plp_up_BarrierTapePolice8m","plp_up_BarrierTapePolice4m","plp_up_BarrierTapePolice1m","plp_up_woodbarrierlongpolice","plp_up_WoodBarrierShortPoliceLightsOn","plp_up_PlasticBarrierOrange","plp_up_BarrierBollardOrange","plp_up_TrafficConeOrange","RoadCone_L_F","RoadCone_F","LandBarGate_F"] select _pia;

barrier = _barrier createvehicle getpos player;
barrier attachto [player,[0,1.5,1]];
barrier setVectorUp surfaceNormal getpos barrier;
