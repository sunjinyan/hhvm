<?hh
require "connect.inc";
<<__EntryPoint>> function main(): void {
$link = ldap_connect($host, $port);
ldap_set_option($link, LDAP_OPT_PROTOCOL_VERSION, $protocol_version);

// Invalid parameter count
var_dump(ldap_start_tls());
var_dump(ldap_start_tls($link, $link));
echo "===DONE===\n";
}
