Pod::Spec.new do |s|
  s.name             = 'cloudcode_gps_track_client_sdk'
  s.version          = '0.0.15'
  s.summary          = 'Cloudcode GPS Tracking Client SDK Flutter plugin.'
  s.description      = 'Flutter wrapper for the Cloudcode GPS Tracking Client SDK.'
  s.homepage         = 'https://github.com/cloudcodepng/cloudcode-gps-track-client-sdk'
  s.license          = { :file => '../LICENSE' }
  s.author           = { 'Cloudcode PNG Limited' => 'support@cloudcode.com.pg' }
  s.source           = { :path => '.' }
  s.source_files     = 'traccar_client_sdk/Sources/traccar_client_sdk/**/*'
  s.dependency       = 'Flutter'
  s.platform         = :ios, '15.0'
  s.swift_version    = '5.0'
end
