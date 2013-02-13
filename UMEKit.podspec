Pod::Spec.new do |s|
  s.name     = 'umekit'
  s.version  = '0.0.1'
  s.license  = { :type => 'Apache License, Version 2.0', :file => 'LICENSE.txt' }
  s.summary  = 'UMEKit (pronounced "you, me kit") is an open source (Apache-license) Mac OS X Framework'\
               'written by Todd Ditchendorf for creating iPhone-like user interfaces in Cocoa desktop applications.'
  s.homepage = 'http://parsekit.com/umekit/'
  s.author   = { 'Todd Ditchendorf' => 'http://twitter.com/itod' }
  s.source   = { :svn => 'https://github.com/mix1009/umekit.git', :tag => '0.0.1' }
  s.source_files  = 'src/*.{h,m}'
end

