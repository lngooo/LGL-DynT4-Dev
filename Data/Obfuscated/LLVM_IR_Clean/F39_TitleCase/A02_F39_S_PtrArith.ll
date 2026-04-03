define dso_local void @y(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i8*
  %4 = alloca i32
  store i8* %0, i8** %2
  %6 = load i8*, i8** %2
  store i8* %6, i8** %3
  store i32 1, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %3
  %10 = load i8, i8* %9
  %11 = icmp ne i8 %10, 0
  br i1 %11, label %12, label %69
12:
  %13 = load i8*, i8** %3
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp eq i32 %15, 32
  br i1 %16, label %27, label %17
17:
  %18 = load i8*, i8** %3
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = icmp eq i32 %20, 9
  br i1 %21, label %27, label %22
22:
  %23 = load i8*, i8** %3
  %24 = load i8, i8* %23
  %25 = sext i8 %24 to i32
  %26 = icmp eq i32 %25, 10
  br i1 %26, label %27, label %28
27:
  store i32 1, i32* %4
  br label %66
28:
  %29 = load i32, i32* %4
  %30 = icmp ne i32 %29, 0
  br i1 %30, label %31, label %48
31:
  %32 = load i8*, i8** %3
  %33 = load i8, i8* %32
  %34 = sext i8 %33 to i32
  %35 = icmp sge i32 %34, 97
  br i1 %35, label %36, label %47
36:
  %37 = load i8*, i8** %3
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = icmp sle i32 %39, 122
  br i1 %40, label %41, label %47
41:
  %42 = load i8*, i8** %3
  %43 = load i8, i8* %42
  %44 = sext i8 %43 to i32
  %45 = sub nsw i32 %44, 32
  %46 = trunc i32 %45 to i8
  store i8 %46, i8* %42
  br label %47
47:
  store i32 0, i32* %4
  br label %65
48:
  %49 = load i8*, i8** %3
  %50 = load i8, i8* %49
  %51 = sext i8 %50 to i32
  %52 = icmp sge i32 %51, 65
  br i1 %52, label %53, label %64
53:
  %54 = load i8*, i8** %3
  %55 = load i8, i8* %54
  %56 = sext i8 %55 to i32
  %57 = icmp sle i32 %56, 90
  br i1 %57, label %58, label %64
58:
  %59 = load i8*, i8** %3
  %60 = load i8, i8* %59
  %61 = sext i8 %60 to i32
  %62 = add nsw i32 %61, 32
  %63 = trunc i32 %62 to i8
  store i8 %63, i8* %59
  br label %64
64:
  br label %65
65:
  br label %66
66:
  %67 = load i8*, i8** %3
  %68 = getelementptr inbounds i8, i8* %67, i32 1
  store i8* %68, i8** %3
  br label %8
69:
  ret void
}
