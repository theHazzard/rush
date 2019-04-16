### REQUIRED
`
sudo apt install libavutil-dev libavcodec-dev libavformat-dev libswscale-dev
`

### Example proyect:
https://github.com/bitmovin/libdash

### Normative Parts

  - The Media Presentation Description (MPD) describes a Media Presentation, i.e. a bounded or unbounded presentation of media content. In particular, it defines formats to announce resource identifiers for Segments as HTTP-URLs and to provide the context for these identified resources within a Media Presentation.  
  - The Segment format specifying the format of the entity body of an HTTP response to an HTTP GET request or a partial HTTP GET, with the indicated byte range through HTTP/1.1 as defined in RFC 2616, to a resource identified in the MPD.