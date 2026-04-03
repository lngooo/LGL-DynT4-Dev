define dso_local i32 @VowelCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i8*, i8** %2
  %8 = load i8, i8* %7
  %9 = icmp ne i8 %8, 0
  br i1 %9, label %10, label %51
10:
  %12 = load i8*, i8** %2
  %13 = load i8, i8* %12
  %14 = zext i8 %13 to i32
  store i32 %14, i32* %4
  %15 = load i32, i32* %4
  %16 = icmp eq i32 %15, 97
  br i1 %16, label %44, label %17
17:
  %18 = load i32, i32* %4
  %19 = icmp eq i32 %18, 101
  br i1 %19, label %44, label %20
20:
  %21 = load i32, i32* %4
  %22 = icmp eq i32 %21, 105
  br i1 %22, label %44, label %23
23:
  %24 = load i32, i32* %4
  %25 = icmp eq i32 %24, 111
  br i1 %25, label %44, label %26
26:
  %27 = load i32, i32* %4
  %28 = icmp eq i32 %27, 117
  br i1 %28, label %44, label %29
29:
  %30 = load i32, i32* %4
  %31 = icmp eq i32 %30, 65
  br i1 %31, label %44, label %32
32:
  %33 = load i32, i32* %4
  %34 = icmp eq i32 %33, 69
  br i1 %34, label %44, label %35
35:
  %36 = load i32, i32* %4
  %37 = icmp eq i32 %36, 73
  br i1 %37, label %44, label %38
38:
  %39 = load i32, i32* %4
  %40 = icmp eq i32 %39, 79
  br i1 %40, label %44, label %41
41:
  %42 = load i32, i32* %4
  %43 = icmp eq i32 %42, 85
  br i1 %43, label %44, label %47
44:
  %45 = load i32, i32* %3
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %3
  br label %47
47:
  %48 = load i8*, i8** %2
  %49 = getelementptr inbounds i8, i8* %48, i32 1
  store i8* %49, i8** %2
  br label %6
51:
  %52 = load i32, i32* %3
  ret i32 %52
}
