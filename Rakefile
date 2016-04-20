require "bundler/gem_tasks"
require "rake/extensiontask"

task :build => :compile

Rake::ExtensionTask.new("totient") do |ext|
  ext.lib_dir = "lib/totient"
end

task :default => [:clobber, :compile, :spec]
