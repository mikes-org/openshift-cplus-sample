
FROM registry.access.redhat.com/openshift3/jenkins-slave-base-rhel7


USER root

RUN yum-config-manager --enable rhel-server-rhscl-7-rpms && \
    yum-config-manager --disable epel >/dev/null || : && \
    INSTALL_PKGS="cmake g++" && \
    yum install -y $INSTALL_PKGS




 
