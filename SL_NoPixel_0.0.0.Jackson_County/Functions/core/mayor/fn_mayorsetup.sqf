hint "Zostałeś burmistrzem Silver Lake, gratulacje!";
format["Burmistrz Silver Lake właśnie się obudził! %1", name player] remoteexec ["hint",-2];
Mayor = true;
player setVariable ["coplevel", 1, false];