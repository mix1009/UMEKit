Pod::Spec.new do |s|
  s.name     = 'UMEKit'
  s.version  = '0.0.1'
  s.platform     = :osx, '10.7'
  s.license  = { :type => 'Apache License, Version 2.0', :file => 'LICENSE.txt' }
  s.homepage = 'https://github.com/mix1009/umekit'
  s.summary  = 'UMEKit is an open source (Apache-license) Mac OS X Framework'\
               ' for creating iPhone-like user interfaces in Cocoa desktop applications.'
  s.author   = { 'Todd Ditchendorf' => 'http://twitter.com/itod' }
  s.source   = { :git => 'https://github.com/mix1009/umekit.git', :tag => '0.0.1' }
  s.source_files  = 'src/*.{h,m}', 'include/UMEKit/*.h'
  s.resources = 'res/img/*.{png,jpg}'
  s.frameworks = 'Cocoa', 'QuartzCore'
  s.requires_arc = true
end

