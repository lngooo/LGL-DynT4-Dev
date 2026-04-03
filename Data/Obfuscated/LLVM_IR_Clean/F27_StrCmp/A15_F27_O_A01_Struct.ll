%struct.BWr = type { i8*, i8* }
define dso_local i32 @JT3(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca %struct.BWr
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %7 = getelementptr inbounds %struct.BWr, %struct.BWr* %5, i32 0, i32 0
  %8 = load i8*, i8** %3
  store i8* %8, i8** %7
  %9 = getelementptr inbounds %struct.BWr, %struct.BWr* %5, i32 0, i32 1
  %10 = load i8*, i8** %4
  store i8* %10, i8** %9
  br label %11
11:
  %12 = getelementptr inbounds %struct.BWr, %struct.BWr* %5, i32 0, i32 0
  %13 = load i8*, i8** %12
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp ne i32 %15, 0
  br i1 %16, label %17, label %27
17:
  %18 = getelementptr inbounds %struct.BWr, %struct.BWr* %5, i32 0, i32 0
  %19 = load i8*, i8** %18
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = getelementptr inbounds %struct.BWr, %struct.BWr* %5, i32 0, i32 1
  %23 = load i8*, i8** %22
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = icmp eq i32 %21, %25
  br label %27
27:
  %28 = phi i1 [ false, %11 ], [ %26, %17 ]
  br i1 %28, label %29, label %36
29:
  %30 = getelementptr inbounds %struct.BWr, %struct.BWr* %5, i32 0, i32 0
  %31 = load i8*, i8** %30
  %32 = getelementptr inbounds i8, i8* %31, i32 1
  store i8* %32, i8** %30
  %33 = getelementptr inbounds %struct.BWr, %struct.BWr* %5, i32 0, i32 1
  %34 = load i8*, i8** %33
  %35 = getelementptr inbounds i8, i8* %34, i32 1
  store i8* %35, i8** %33
  br label %11
36:
  %37 = getelementptr inbounds %struct.BWr, %struct.BWr* %5, i32 0, i32 0
  %38 = load i8*, i8** %37
  %39 = load i8, i8* %38
  %40 = zext i8 %39 to i32
  %41 = getelementptr inbounds %struct.BWr, %struct.BWr* %5, i32 0, i32 1
  %42 = load i8*, i8** %41
  %43 = load i8, i8* %42
  %44 = zext i8 %43 to i32
  %45 = sub nsw i32 %40, %44
  ret i32 %45
}
