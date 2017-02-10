class CfgPatches {
    class NoPixel_Server {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredAddons[] = {};
    };
};
class CfgFunctions {
    class Server {
        class Save {
            file = "NoPixel_Server\server\core\Save";
            class autolock {};
            class paintball {};
            class updatemafiabank {};
            class mafiabank {};
            class updateMafiaOwed {};
            class MafiaOwed {};
            class promote {};
            class connected {};
            class resetConnected {};
            class handleDisconnect {};
            class setupVariablesServer {};
            class initStats {};
            class steppedSync {};
            class statSave {};
            class statSaveDisconnect {};
            class statSaveLoop {};
            class cleanup {};
            class SetVariable {};
            class sendMessage {};
            class sendMail {};
            class retreivePhonebook {};
            class updatefastest {};
            class updatefastestRally {};
            class racetimes {};
            class rallyracetimes {};
			class insertLog {};
			class invSave {};
			class updateVehicleColor {};
        };
        class Shopping {
            file = "NoPixel_Server\server\core\Shopping";
            class retreiveStore {};
            class retreiveStoreShopper {};
            class shopPurchase {};
            class storeUpdateName {};
            class finishStoreUpdate {};
			class closeshop {};
			class vehBuy {};
            class economyEvents {};
        };
        class Wanted {
            file = "NoPixel_Server\server\core\Wanted";
            class wantedList {};
            class wantedRemove {};
			class wantedRemove2 {};
            class addcriminal {};
            class wantedAdd {};
            class jailsetup {};
            class robberyCall {};
            class robberyCallBank {};
        };
        class Housing {
            file = "NoPixel_Server\server\core\Housing";
            class retreiveHouse {};
        };
        class Logs {
            file = "NoPixel_Server\server\core\Logs";
            class actionLog {};
            class moneyLog {};
            class vehicleLog {};
            class copLog {};
            class deathLog {};
            class economyLog {};
            class adminLog {};
        };
        class Mayor {
            file = "NoPixel_Server\server\core\Mayor";
            class paymayor {};
            class mayorsetup {};
            class mayorupdate {};
			class taxupdate {};
        };
        class Garage {
            file = "NoPixel_Server\server\core\Garage";
            class upgradeVehicle {};
            class getVehInfo {};
            class policechecklicense {};
            class platechange {};
            class garageUpdate {};
            class updateCarStatus {};
            class lock {};
            class raceenter {};
			class srvholmsg {};
        };
        class Jobs {
            file = "NoPixel_Server\server\core\Jobs";
            class refreshjobs {};
            class drugjob {};
            class firestart {};
            class rentoffice {};
            class requestmedic {};
            class quitJob {};
            class requestJobs {};
            class addJob {};
            class jobAction {};
            class jobStart {};
            class quitDispatch {};
            class giveTask {};
        };
    };
    class ExternalS {
        class ExtDB {
            file = "NoPixel_Server\External\ExtDB";
            class ExtDBasync {};
            class ExtDBinit {};
            class ExtDBstrip {};
            class ExtDBquery {};
        };
    };
};