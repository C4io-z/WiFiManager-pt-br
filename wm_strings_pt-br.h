/**
 * wm_strings_pt-br.h
 * Strings em português para o WiFiManager,
 * uma biblioteca para a plataforma ESP8266/Arduino
 * para configuracao das credenciais WiFi usando um Portal Cativo
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @licenca MIT
*/

#ifndef _WM_STRINGS_EN_H_
#define _WM_STRINGS_EN_H_


#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

// strings files must include a consts file!
#include "wm_consts_en.h" // include constants, tokens, routes

const char WM_LANGUAGE[] PROGMEM = "pt"; // i18n lang code
/*
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

</body>
</html>
*/
const char HTTP_HEAD_START[] PROGMEM = "<!DOCTYPE html>"
"<html lang='en'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta  name='viewport' content='width=device-width,initial-scale=1.0,user-scalable=no'/>"
"<title>{v}</title>";

const char HTTP_SCRIPT[] PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();};"
"function f() {var x = document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
"</script>";

const char HTTP_HEAD_END[] PROGMEM = "</head><body class='{c}'><div class='wrap'>";

const char HTTP_ROOT_MAIN[] PROGMEM = "<h1>{t}</h1><h3>{v}</h3>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Configurar Wi-Fi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configurar Wi-Fi (Sem escanear)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Informacoes</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Configuracoes</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>Fechar</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Reiniciar</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>Sair</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Apagar</button></form><br/>\n", // MENU_ERASE
"<form action='/update'  method='get'><button>Atualizar</button></form><br/>\n",// MENU_UPDATE
"<hr><br/>" // MENU_SEP
};

const char HTTP_PORTAL_OPTIONS[] PROGMEM = "";

const char HTTP_ITEM_QI[] PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[] PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM[] PROGMEM = "<div><a href='#p' onclick='c(this)' data-ssid='{V}'>{v}</a>{qi}{qp}</div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP

const char HTTP_FORM_START[] PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[] PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Senha</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'><input type='checkbox' onclick='f()'> Mostrar Senha";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Salvar</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>\n"; // do not remove newline!

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Recarregar</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Salvando credenciais<br/>Tentando conectar ESP3 ao WiFi<br />Em caso de falha, recarrgue e tente de novo</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Salvo<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Apagar config. WiFi</button></form>";
const char HTTP_UPDATEBTN[]        PROGMEM = "<br/><form action='/update' method='get'><button>Atualizar</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Voltar</button></form>";

const char HTTP_STATUS_ON[] PROGMEM = "<div class='msg S'><strong>Conectado</strong> a {v}<br/><em><small>com IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[] PROGMEM = "<div class='msg {c}'><strong>Nao conectado</strong> a {v}{r}</div>"; // {c=classe} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[] PROGMEM = "<br/>Falha na autenticacao"; // STATION_WRONG_PASSWORD, sem eps32
const char HTTP_STATUS_OFFNOAP[] PROGMEM = "<br/>AP nao encontrado"; // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[] PROGMEM = "<br/>Nao foi possível conectar"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[] PROGMEM = "<div class='msg'>Nenhum AP configurado</div>";
const char HTTP_BR[] PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
".c,body{text-align:center;font-family:verdana}div,input,select{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box}"
"input,button,select,.msg{border-radius:.3rem;width: 100%}input[type=radio],input[type=checkbox]{width:auto}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#1fa3ec;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #1fa3ec}"
".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
// links
"a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
// quality icons
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
// icons @2x media query (32px rescaled)
"@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"
// msg callouts
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
// lists
"dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
"td{vertical-align: top;}"
".h{display:none}"
"button{transition: 0s opacity;transition-delay: 3s;transition-duration: 0s;cursor: pointer}"
"button.D{background-color:#dc3630}"
"button:active{opacity:50% !important;cursor:wait;transition-delay: 0s}"
// invert
"body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
"body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
"body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
":disabled {opacity: 0.5;}"
"</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[] PROGMEM =
"<br/><h3>Páginas disponíveis</h3><hr>"
"<table class='table'>"
"<thead><tr><th>Página</th><th>Funcao</th></tr></thead><tbody>"
"<tr><td><a href='/'>/</a></td>"
"<td>Página de menu.</td></tr>"
"<tr><td><a href='/wifi'>/wifi</a></td>"
"<td>Mostra os resultados da varredura de WiFi e permite configurar a conexao WiFi. (/0wifi noscan)</td></tr>"
"<tr><td><a href='/wifisave'>/wifisave</a></td>"
"<td>Salva as informacoes de configuracao WiFi e configura o dispositivo. Requer a fornecimento de variáveis.</td></tr>"
"<tr><td><a href='/param'>/param</a></td>"
"<td>Página de parâmetros</td></tr>"
"<tr><td><a href='/info'>/info</a></td>"
"<td>Página de informacoes</td></tr>"
"<tr><td><a href='/u'>/u</a></td>"
"<td>Atualizacao OTA (Over-the-Air)</td></tr>"
"<tr><td><a href='/close'>/close</a></td>"
"<td>Fechar o portal cativo, o portal de configuracao permanecerá ativo</td></tr>"
"<tr><td>/exit</td>"
"<td>Sair do portal de configuracao, o portal será fechado</td></tr>"
"<tr><td>/restart</td>"
"<td>Reiniciar o dispositivo</td></tr>"
"<tr><td>/erase</td>"
"<td>Apagar a configuracao WiFi e reiniciar o dispositivo. O dispositivo nao se reconectará a uma rede até que novos dados de configuracao WiFi sejam inseridos.</td></tr>"
"</table>"
"<p/>GitHub <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";
#else
const char HTTP_HELP[]             PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Enviar novo firmware<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Atualizar</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* Pode nao funcionar dentro do portal cativo, abra no navegador http://192.168.4.1</a><small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Falha na atualizacao!</strong><br/>Reinicie o dispositivo e tente novamente</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>Atualizacao bem-sucedida. </strong><br/> Reiniciando o dispositivo agora...</div>";



#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
// @todo remove html elements from progmem, repetetive strings
#ifdef ESP32
const char HTTP_INFO_esphead[] PROGMEM = "<h3>esp32</h3><hr><dl>";
const char HTTP_INFO_chiprev[] PROGMEM = "<dt>Revisao do chip</dt><dd>{1}</dd>";
const char HTTP_INFO_lastreset[] PROGMEM = "<dt>Último motivo de reinicializacao</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
const char HTTP_INFO_aphost[] PROGMEM = "<dt>Nome do ponto de acesso</dt><dd>{1}</dd>";
const char HTTP_INFO_psrsize[] PROGMEM = "<dt>Tamanho da PSRAM</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_temp[] PROGMEM = "<dt>Temperatura</dt><dd>{1} C° / {2} F°</dd>";
const char HTTP_INFO_hall[] PROGMEM = "<dt>Hall</dt><dd>{1}</dd>";
#else
const char HTTP_INFO_esphead[] PROGMEM = "<h3>esp8266</h3><hr><dl>";
const char HTTP_INFO_fchipid[] PROGMEM = "<dt>ID do chip de flash</dt><dd>{1}</dd>";
const char HTTP_INFO_corever[] PROGMEM = "<dt>Versao do núcleo</dt><dd>{1}</dd>";
const char HTTP_INFO_bootver[] PROGMEM = "<dt>Versao de inicializacao</dt><dd>{1}</dd>";
const char HTTP_INFO_lastreset[] PROGMEM = "<dt>Último motivo de reinicializacao</dt><dd>{1}</dd>";
const char HTTP_INFO_flashsize[] PROGMEM = "<dt>Tamanho real da flash</dt><dd>{1} bytes</dd>";
#endif

const char HTTP_INFO_memsmeter[] PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[] PROGMEM = "<dt>Memória - Tamanho do Sketch</dt><dd>Utilizado / Total de bytes<br/>{1} / {2}";
const char HTTP_INFO_freeheap[] PROGMEM = "<dt>Memória - Heap livre</dt><dd>{1} bytes disponíveis</dd>";
const char HTTP_INFO_wifihead[] PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[] PROGMEM = "<dt>Tempo de atividade</dt><dd>{1} minutos {2} segundos</dd>";
const char HTTP_INFO_chipid[] PROGMEM = "<dt>ID do Chip</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[] PROGMEM = "<dt>Tamanho da Flash</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[] PROGMEM = "<dt>Versao do SDK</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[] PROGMEM = "<dt>Frequência do CPU</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[] PROGMEM = "<dt>IP do ponto de acesso</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[] PROGMEM = "<dt>MAC do ponto de acesso</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[] PROGMEM = "<dt>SSID do ponto de acesso</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[] PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[] PROGMEM = "<dt>SSID do dispositivo</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[] PROGMEM = "<dt>IP do dispositivo</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[] PROGMEM = "<dt>Gateway do dispositivo</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[] PROGMEM = "<dt>Sub-rede do dispositivo</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[] PROGMEM = "<dt>Servidor DNS</dt><dd>{1}</dd>";
const char HTTP_INFO_host[] PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[] PROGMEM = "<dt>MAC do dispositivo</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[] PROGMEM = "<dt>Conectado</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[] PROGMEM = "<dt>Autoconexao</dt><dd>{1}</dd>";

const char HTTP_INFO_aboutver[] PROGMEM = "<dt>Versao do WiFiManager</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<dt>Versao do Arduino</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutsdk[] PROGMEM = "<dt>ESP-SDK/IDF</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutdate[] PROGMEM = "<dt>Data de compilacao</dt><dd>{1}</dd>";

const char S_brand[] PROGMEM = "WiFiManager";
const char S_debugPrefix[] PROGMEM = "*wm:";
const char S_y[] PROGMEM = "Sim";
const char S_n[] PROGMEM = "Nao";
const char S_enable[] PROGMEM = "Ativado";
const char S_disable[] PROGMEM = "Desativado";
const char S_GET[] PROGMEM = "GET";
const char S_POST[] PROGMEM = "POST";
const char S_NA[] PROGMEM = "Desconhecido";
const char S_passph[] PROGMEM = "********";
const char S_titlewifisaved[] PROGMEM = "Credenciais salvas";
const char S_titlewifisettings[] PROGMEM = "Configuracoes salvas";
const char S_titlewifi[] PROGMEM = "Configurar ESP";
const char S_titleinfo[] PROGMEM = "Informacoes";
const char S_titleparam[] PROGMEM = "Configuracao";
const char S_titleparamsaved[] PROGMEM = "Configuracao salva";
const char S_titleexit[] PROGMEM = "Sair";
const char S_titlereset[] PROGMEM = "Redefinir";
const char S_titleerase[] PROGMEM = "Apagar";
const char S_titleclose[] PROGMEM = "Fechar";
const char S_options[] PROGMEM = "opcoes";
const char S_nonetworks[] PROGMEM = "Nenhuma rede encontrada. Atualize para escanear novamente.";
const char S_staticip[] PROGMEM = "IP Estático";
const char S_staticgw[] PROGMEM = "Gateway Estático";
const char S_staticdns[] PROGMEM = "DNS Estático";
const char S_subnet[] PROGMEM = "Sub-rede";
const char S_exiting[] PROGMEM = "Saindo";
const char S_resetting[] PROGMEM = "O módulo será redefinido em alguns segundos.";
const char S_closing[] PROGMEM = "Você pode fechar a página, o portal continuará em execucao";
const char S_error[] PROGMEM = "Ocorreu um erro";
const char S_notfound[] PROGMEM = "Arquivo nao encontrado\n\n";
const char S_uri[] PROGMEM = "URI: ";
const char S_method[] PROGMEM = "\nMétodo: ";
const char S_args[] PROGMEM = "\nArgumentos: ";
const char S_parampre[] PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";


// softap ssid default prefix
#ifdef ESP8266
    const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
    const char S_ssidpre[]        PROGMEM = "ESP32";
#else
    const char S_ssidpre[]        PROGMEM = "WM";
#endif

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

#endif
