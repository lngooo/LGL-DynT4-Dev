define dso_local i32 @Nv(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  br label %6
6:
  %7 = load i8*, i8** %4
  %8 = load i8, i8* %7
  %9 = sext i8 %8 to i32
  %10 = load i8*, i8** %5
  %11 = load i8, i8* %10
  %12 = sext i8 %11 to i32
  %13 = icmp ne i32 %9, %12
  br i1 %13, label %14, label %22
14:
  %15 = load i8*, i8** %4
  %16 = load i8, i8* %15
  %17 = zext i8 %16 to i32
  %18 = load i8*, i8** %5
  %19 = load i8, i8* %18
  %20 = zext i8 %19 to i32
  %21 = sub nsw i32 %17, %20
  store i32 %21, i32* %3
  br label %59
22:
  %23 = load i8*, i8** %4
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = icmp eq i32 %25, 0
  br i1 %26, label %27, label %28
27:
  store i32 0, i32* %3
  br label %59
28:
  %29 = load i8*, i8** %4
  %30 = getelementptr inbounds i8, i8* %29, i32 1
  store i8* %30, i8** %4
  %31 = load i8*, i8** %5
  %32 = getelementptr inbounds i8, i8* %31, i32 1
  store i8* %32, i8** %5
  %33 = load i8*, i8** %4
  %34 = load i8, i8* %33
  %35 = sext i8 %34 to i32
  %36 = load i8*, i8** %5
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = icmp ne i32 %35, %38
  br i1 %39, label %40, label %48
40:
  %41 = load i8*, i8** %4
  %42 = load i8, i8* %41
  %43 = zext i8 %42 to i32
  %44 = load i8*, i8** %5
  %45 = load i8, i8* %44
  %46 = zext i8 %45 to i32
  %47 = sub nsw i32 %43, %46
  store i32 %47, i32* %3
  br label %59
48:
  %49 = load i8*, i8** %4
  %50 = load i8, i8* %49
  %51 = sext i8 %50 to i32
  %52 = icmp eq i32 %51, 0
  br i1 %52, label %53, label %54
53:
  store i32 0, i32* %3
  br label %59
54:
  %55 = load i8*, i8** %4
  %56 = getelementptr inbounds i8, i8* %55, i32 1
  store i8* %56, i8** %4
  %57 = load i8*, i8** %5
  %58 = getelementptr inbounds i8, i8* %57, i32 1
  store i8* %58, i8** %5
  br label %6
59:
  %60 = load i32, i32* %3
  ret i32 %60
}
