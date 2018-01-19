/^# Packages using this file: / {
  s/# Packages using this file://
  ta
  :a
  s/ monitoring-plugins / monitoring-plugins /
  tb
  s/ $/ monitoring-plugins /
  :b
  s/^/# Packages using this file:/
}
